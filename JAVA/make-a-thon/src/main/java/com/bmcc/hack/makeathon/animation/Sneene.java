package com.bmcc.hack.makeathon.animation;

import com.aldebaran.qi.Application;
import com.aldebaran.qi.CallError;
import com.aldebaran.qi.Session;
import com.aldebaran.qi.helper.ALProxy;
import com.aldebaran.qi.helper.proxies.ALMemory;
import com.aldebaran.qi.helper.proxies.ALMotion;
import com.aldebaran.qi.helper.proxies.ALRobotPosture;
import com.aldebaran.qi.helper.proxies.ALTextToSpeech;
import com.bmcc.hack.makeathon.util.UtilTool;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author Weida Jiang
 * @date 7/10/20 1:48 PM
 */


public class Sneene {

    public static void disPlaySneene(ALMotion motion) {

        boolean isAbsolute = true;
        ArrayList<String> names = new ArrayList<String>(Arrays.asList());
        ArrayList<ArrayList<Float>> times = new ArrayList<ArrayList<Float>>();
        ArrayList<ArrayList<Float>> keys = new ArrayList<ArrayList<Float>>();

        names.add("HeadPitch");
        ArrayList<Float> time = new ArrayList<Float>(Arrays.asList(1.36f));
        ArrayList<Float> key = new ArrayList<Float>(
                Arrays.asList(0.111701f));
        times.add(time);
        keys.add(key);

        names.add("HeadYaw");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.240855f));
        times.add(time);
        keys.add(key);

        names.add("LAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.502292f));
        times.add(time);
        keys.add(key);

        names.add("LAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.00532509f));
        times.add(time);
        keys.add(key);

        names.add("LElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.514904f));
        times.add(time);
        keys.add(key);

        names.add("LElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-1.50989f));
        times.add(time);
        keys.add(key);

        names.add("LHand");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.298894f));
        times.add(time);
        keys.add(key);

        names.add("LHipPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.343959f));
        times.add(time);
        keys.add(key);

        names.add("LHipRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.00532516f));
        times.add(time);
        keys.add(key);

        names.add("LHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.00504948f));
        times.add(time);
        keys.add(key);

        names.add("LKneePitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.854854f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(1.84235f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.292077f));
        times.add(time);
        keys.add(key);

        names.add("LWristYaw");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.0112169f));
        times.add(time);
        keys.add(key);

        names.add("RAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.50229f));
        times.add(time);
        keys.add(key);


        names.add("RAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.00532549f));
        times.add(time);
        keys.add(key);

        names.add("RElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(1.51145f));
        times.add(time);
        keys.add(key);

        names.add("RElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.384784f));
        times.add(time);
        keys.add(key);

        names.add("RHand");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(1f));
        times.add(time);
        keys.add(key);

        names.add("RHipPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.346411f));
        times.add(time);
        keys.add(key);

        names.add("RHipRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.00532558f));
        times.add(time);
        keys.add(key);

        names.add("RHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.00504948f));
        times.add(time);
        keys.add(key);

        names.add("RKneePitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.850036f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.0149617f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(0.0858049f));
        times.add(time);
        keys.add(key);

        names.add("RWristYaw");
        time = new ArrayList<Float>(Arrays.asList(1.36f));
        key = new ArrayList<Float>(Arrays.asList(-0.327869f));
        times.add(time);
        keys.add(key);

        try {
            motion.angleInterpolation(names, keys, times, isAbsolute);
        } catch (CallError | InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

    }


    public static void main(String[] args) throws Exception {
        Application application = new Application(args, UtilTool.LOCALURL);

        application.start();
        System.out.println("Successfully connected to the robot");

        Sneene greeting = new Sneene();

        greeting.run(application.session());


    }

    public void run(Session session) throws Exception {

        ALMotion motion = new ALMotion(session);

        ALRobotPosture posture = new ALRobotPosture(session);
        ALTextToSpeech tts  = new ALTextToSpeech(session);


        motion= new ALMotion(session);
        posture= new ALRobotPosture(session);
        // leds=new ALLeds(session);
        tts = new ALTextToSpeech(session);
        motion.wakeUp();
        posture.goToPosture("Stand",0.8f);
        motion.walkTo(0.3f,0f,0f);

        disPlaySneene(motion);
        tts.say("a..a..achoo!");
        posture.goToPosture("Stand",0.2f);

    }

}
