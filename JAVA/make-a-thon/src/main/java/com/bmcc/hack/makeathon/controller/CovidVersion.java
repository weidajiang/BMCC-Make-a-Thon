package com.bmcc.hack.makeathon.controller;

import com.aldebaran.qi.Application;
import com.alibaba.fastjson.JSON;
import com.bmcc.hack.makeathon.animation.EyeInchy;
import com.bmcc.hack.makeathon.animation.Sneene;
import com.bmcc.hack.makeathon.util.UtilTool;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.Mapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.HashMap;
import java.util.Map;

/**
 * @author Weida Jiang
 * @date 7/10/20 1:42 PM
 */

@RestController
public class CovidVersion {

    String[] args = {};
    Application application = new Application(args, UtilTool.LOCALURL);

    @RequestMapping ("/sneene")
    public String sneene() {


        application.start();

        Sneene sneene = new Sneene();
        Map<String, Integer> result = new HashMap<String, Integer>();
        // call sneene module
        try {
            sneene.run(application.session());
            result.put("status", 200);
        } catch (Exception e) {
            result.put("status", 500);
            e.printStackTrace();
        }
        // convert it to JSON
        String jsonStr = JSON.toJSONString(result);
        application.stop();
        return jsonStr;
    }

    @RequestMapping ("/eyeInchy")
    public String eyeInchy() {



        application.start();

        EyeInchy eyeInchy = new EyeInchy();
        Map<String, Integer> result = new HashMap<String, Integer>();
        // call sneene module
        try {
            eyeInchy.run(application.session());
            result.put("status", 200);
        } catch (Exception e) {
            result.put("status", 500);
            e.printStackTrace();
        }
        // convert it to JSON
        String jsonStr = JSON.toJSONString(result);
        application.stop();
        return jsonStr;
    }


}
