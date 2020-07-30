import Foundation
import UIKit
import AVFoundation
import Speech


// call the function outside the struct
// httpRequestDemo().perfromRequest(urlSring: "PUT_URL_HERE")

struct httpRequestDemo {
    
    
    
    // http GET request
    // urlString such as https://853d1cb2.ngrok.io/greeting;
    
    func perfromRequest(urlSring: String)  {
        
        if let url = URL(string: urlSring){
            
            let session = URLSession(configuration: .default);
            
            let task = session.dataTask(with: url, completionHandler: handle(data:response:error:));
            task.resume();
            
        }
    }
    
    // http POST request
    
    func recordRequest(urlSring: String, content:String )  {
        
        
        let session = URLSession(configuration: .default)
        let url = urlSring
        var request = URLRequest(url: URL(string: url)!)
        request.setValue("application/x-www-form-urlencoded", forHTTPHeaderField: "Content-Type")
        request.httpMethod = "POST"
        
        
        let postData = ["content":content]
        let postString = postData.compactMap({ (key, value) -> String in
            return "\(key)=\(value)"
        }).joined(separator: "&")
        
        //convert to key - value pair type
        request.httpBody = postString.data(using: .utf8)
        
        let task = session.dataTask(with: request) {(data, response, error) in
            do {
                let r = try JSONSerialization.jsonObject(with: data!, options: JSONSerialization.ReadingOptions.mutableContainers) as! NSDictionary
                print(r)
            } catch {
                print("can not connect to Server")
                return
            }
        }
        task.resume()
    }
    
    
    func handle(data: Data?, response: URLResponse?, error: Error?) {
        
        if (error != nil){
            print(error!);
            return;
        }
        if let safeData = data {
            let dataString = String(data: safeData, encoding: .utf8);
            self.parseJSON(resultData: safeData)
        }
        
    }
    
    
    // parse the JOSN data and call the native speaker to display
    func parseJSON(resultData: Data)  {
        
        let decoder = JSONDecoder()
        
        do{
            let decodeData = try decoder.decode(ResultData.self, from: resultData)
            print(decodeData.result)
            let speechSynthesizer = AVSpeechSynthesizer();
            
            let speechUtterance: AVSpeechUtterance = AVSpeechUtterance(string: decodeData.result);
            
            speechUtterance.rate = AVSpeechUtteranceMaximumSpeechRate / 2.0;
            
            speechUtterance.voice = AVSpeechSynthesisVoice(language: "en-US");
            
            speechSynthesizer.speak(speechUtterance);
            
        }catch {
            print(error)
        }
        
    }
    
    
}



