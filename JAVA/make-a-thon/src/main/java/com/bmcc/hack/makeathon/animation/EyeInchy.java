package com.bmcc.hack.makeathon.animation;

import com.aldebaran.qi.Application;
import com.aldebaran.qi.CallError;
import com.aldebaran.qi.Session;
import com.aldebaran.qi.helper.proxies.ALMotion;
import com.aldebaran.qi.helper.proxies.ALRobotPosture;
import com.aldebaran.qi.helper.proxies.ALTextToSpeech;
import com.bmcc.hack.makeathon.util.UtilTool;

import java.util.ArrayList;
import java.util.Arrays;




public class EyeInchy {

    public static void disPlay(ALMotion motion) {

        boolean isAbsolute = true;
        ArrayList<String> names = new ArrayList<String>(Arrays.asList());
        ArrayList<ArrayList<Float>> times = new ArrayList<ArrayList<Float>>();
        ArrayList<ArrayList<Float>> keys = new ArrayList<ArrayList<Float>>();

        names.add("HeadPitch");
        ArrayList<Float> time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        ArrayList<Float> key = new ArrayList<Float>(
                Arrays.asList(0.125664f, 0.125664f, 0.125664f, 0.125664f, 0.125664f, -0.168476f));
        times.add(time);
        keys.add(key);

        names.add("HeadYaw");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.240855f, -0.481711f, -0.240855f, -0.481711f, -0.240855f, -0.000242775f));
        times.add(time);
        keys.add(key);

        names.add("LAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.606291f, -0.606291f, -0.606291f, -0.606291f, -0.606291f, -0.606291f));
        times.add(time);
        keys.add(key);

        names.add("LAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.0084557f, 0.0084557f, 0.0084557f, 0.0084557f, 0.0084557f, 0.0084557f));
        times.add(time);
        keys.add(key);

        names.add("LElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.521056f, -0.521056f, -0.521056f, -0.521056f, -0.521056f, -0.521056f));
        times.add(time);
        keys.add(key);

        names.add("LElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-1.50518f, -1.50518f, -1.50518f, -1.50518f, -1.50518f, -1.49518f));
        times.add(time);
        keys.add(key);

        names.add("LHand");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.298894f, 0.298894f, 0.298894f, 0.298894f, 0.298894f, 0.298894f));
        times.add(time);
        keys.add(key);

        names.add("LHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.228919f, -0.228919f, -0.228919f, -0.228919f, -0.228919f, -0.228919f));
        times.add(time);
        keys.add(key);

        names.add("LHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.0084557f, -0.0084557f, -0.0084557f, -0.0084557f, -0.0084557f, -0.0084557f));
        times.add(time);
        keys.add(key);

        names.add("LHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f));
        times.add(time);
        keys.add(key);

        names.add("LKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.836978f, 0.836978f, 0.836978f, 0.836978f, 0.836978f, 0.836978f));
        times.add(time);
        keys.add(key);

       names.add("LShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(1.82621f, 1.82621f, 1.82621f, 1.82621f, 1.82621f, 1.82621f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.294948f, 0.294948f, 0.294948f, 0.294948f, 0.294948f, 0.2637f));
        times.add(time);
        keys.add(key);

        names.add("LWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00761449f, 0.00761449f, 0.00761449f, 0.00761449f, 0.00761449f, 0.00761449f));
        times.add(time);
        keys.add(key);

        names.add("RAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.429361f, -0.429361f, -0.429361f, -0.429361f, -0.429361f, -0.429361f));
        times.add(time);
        keys.add(key);

        names.add("RAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00845734f, 0.00845734f, 0.00845734f, 0.00845734f, 0.00845734f, 0.00845734f));
        times.add(time);
        keys.add(key);

        names.add("RElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(1.54379f, 1.54379f, 1.54379f, 1.54379f, 1.54379f, 0.513725f));
        times.add(time);
        keys.add(key);

        names.add("RElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(1.14483f, 1.14483f, 1.14483f, 1.14483f, 1.14483f, 1.49511f));
        times.add(time);
        keys.add(key);

        names.add("RHand");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.386408f, 0.386408f, 0.386408f, 0.386408f, 0.386408f, 0.299119f));
        times.add(time);
        keys.add(key);

        names.add("RHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.496878f, -0.496878f, -0.496878f, -0.496878f, -0.496878f, -0.496878f));
        times.add(time);
        keys.add(key);

        names.add("RHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00845732f, -0.00845732f, -0.00845732f, -0.00845732f, -0.00845732f, -0.00845732f));
        times.add(time);
        keys.add(key);

        names.add("RHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f, -0.00207486f));
        times.add(time);
        keys.add(key);

        names.add("RKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.919502f, 0.919502f, 0.919502f, 0.919502f, 0.919502f, 0.919502f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(0.363217f, 0.363217f, 0.363217f, 0.363217f, 0.363217f, 1.84488f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.0564029f, -0.0564029f, -0.0564029f, -0.0564029f, -0.0564029f, -0.268357f));
        times.add(time);
        keys.add(key);

        names.add("RWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.8f, 1.2f, 1.6f, 2f, 2.4f, 3f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.158677f, -0.158677f, -0.158677f, -0.158677f, -0.158677f, 0.00761449f));
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

        EyeInchy eyeInchy = new EyeInchy();

        eyeInchy.run(application.session());


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
        tts.say("my eyes are itching");
        disPlay(motion);

        posture.goToPosture("Stand",0.2f);

    }




    
}
