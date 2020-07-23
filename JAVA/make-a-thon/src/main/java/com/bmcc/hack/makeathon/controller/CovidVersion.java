package com.bmcc.hack.makeathon.controller;

import com.aldebaran.qi.Application;
import com.alibaba.fastjson.JSON;
import com.bmcc.hack.makeathon.animation.ElbowBump;
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
        Map<String, String> result = new HashMap<String, String>();
        // call sneene module
        try {
            sneene.run(application.session());
            result.put("result", "Good job");
        } catch (Exception e) {
            result.put("result", "Error");
            e.printStackTrace();
        }
        // convert it to JSON
        String jsonStr = JSON.toJSONString(result);
        application.stop();
        return jsonStr;
    }

    @RequestMapping ("/elbowBump")
    public String elbowBump() {


        application.start();

        ElbowBump elbowBump = new ElbowBump();
        Map<String, String> result = new HashMap<String, String>();
        // call sneene module
        try {
            elbowBump.run(application.session());
            result.put("result", "Good Job");
        } catch (Exception e) {
            result.put("result", "Error");
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
        Map<String, String> result = new HashMap<String, String>();
        // call sneene module
        try {
            eyeInchy.run(application.session());
            result.put("result", "Good Job");
        } catch (Exception e) {
            result.put("result", "Error");
            e.printStackTrace();
        }
        // convert it to JSON
        String jsonStr = JSON.toJSONString(result);
        application.stop();
        return jsonStr;
    }


}
