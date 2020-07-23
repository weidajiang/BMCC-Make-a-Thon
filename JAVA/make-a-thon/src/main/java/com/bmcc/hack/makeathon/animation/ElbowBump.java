package com.bmcc.hack.makeathon.animation;

import com.aldebaran.qi.Application;
import com.aldebaran.qi.CallError;
import com.aldebaran.qi.Session;
import com.aldebaran.qi.helper.ALProxy;
import com.aldebaran.qi.helper.proxies.ALMotion;
import com.aldebaran.qi.helper.proxies.ALRobotPosture;
import com.aldebaran.qi.helper.proxies.ALTextToSpeech;
import com.bmcc.hack.makeathon.util.UtilTool;

import java.util.ArrayList;
import java.util.Arrays;

public class ElbowBump {

    public static void disPlayHandShake(ALMotion motion) {

        boolean isAbsolute = true;
        ArrayList<String> names = new ArrayList<String>(Arrays.asList());
        ArrayList<ArrayList<Float>> times = new ArrayList<ArrayList<Float>>();
        ArrayList<ArrayList<Float>> keys = new ArrayList<ArrayList<Float>>();

        names.add("HeadPitch");
        ArrayList<Float> time = new ArrayList<Float>(Arrays.asList(0.28f));
        ArrayList<Float> key = new ArrayList<Float>(
                Arrays.asList(-0.17f));
        times.add(time);
        keys.add(key);


        names.add("HeadYaw");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0f));
        times.add(time);
        keys.add(key);



        names.add("LAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.504262f));
        times.add(time);
        keys.add(key);

        names.add("LAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00922569f));
        times.add(time);
        keys.add(key);

        names.add("LElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.509348f));
        times.add(time);
        keys.add(key);

        names.add("LElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-1.49367f));
        times.add(time);
        keys.add(key);


        names.add("LHand");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.3f));
        times.add(time);
        keys.add(key);

        names.add("LHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.339959f));
        times.add(time);
        keys.add(key);

        names.add("LHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00922558f));
        times.add(time);
        keys.add(key);

        names.add("LHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00363276f));
        times.add(time);
        keys.add(key);


        names.add("LKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.852825f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(1.83609f));
        times.add(time);
        keys.add(key);



        names.add("LShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.270427f));
        times.add(time);
        keys.add(key);

        names.add("LWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00761449f));
        times.add(time);
        keys.add(key);




        names.add("RAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.508626f));
        times.add(time);
        keys.add(key);

        names.add("RAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00922537f));
        times.add(time);
        keys.add(key);

        names.add("RElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f, 1f, 1.64f));
        key = new ArrayList<Float>(
                Arrays.asList(0.525438f, 0.518363f, 0.518363f));
        times.add(time);
        keys.add(key);

        names.add("RElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(1.49956f));
        times.add(time);
        keys.add(key);



        names.add("RHand");
        time = new ArrayList<Float>(Arrays.asList(0.28f, 1f, 1.64f));
        key = new ArrayList<Float>(
                Arrays.asList(0.3f, 1f, 1f));
        times.add(time);
        keys.add(key);

        names.add("RHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.342722f));
        times.add(time);
        keys.add(key);

        names.add("RHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00922525f));
        times.add(time);
        keys.add(key);

        names.add("RHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00363276f));
        times.add(time);
        keys.add(key);

        names.add("RKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.852319f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.28f,1f,1.64f));
        key = new ArrayList<Float>(
                Arrays.asList(1.83459f, 1.24442f, 1.24442f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.28f,1f,1.64f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.264166f, 0.314159f, 0.314159f));
        times.add(time);
        keys.add(key);

        names.add("RWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.28f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00761449f));
        times.add(time);
        keys.add(key);

        try {
            motion.angleInterpolation(names, keys, times, isAbsolute);
        } catch (CallError | InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

    }

    public static void disPlayElbowBump(ALMotion motion) {

        boolean isAbsolute = true;
        ArrayList<String> names = new ArrayList<String>(Arrays.asList());
        ArrayList<ArrayList<Float>> times = new ArrayList<ArrayList<Float>>();
        ArrayList<ArrayList<Float>> keys = new ArrayList<ArrayList<Float>>();

        names.add("HeadPitch");
        ArrayList<Float> time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        ArrayList<Float> key = new ArrayList<Float>(
                Arrays.asList(-0.17f, -0.17f, -0.17f));
        times.add(time);
        keys.add(key);

        names.add("HeadYaw");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0f, 0f, 0f));
        times.add(time);
        keys.add(key);

        names.add("LAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.504262f, -0.500536f, -0.500536f));
        times.add(time);
        keys.add(key);

        names.add("LAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00472604f, -0.0113958f, -0.0113958f));
        times.add(time);
        keys.add(key);

        names.add("LElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.507802f, -0.50607f, -0.50607f));
        times.add(time);
        keys.add(key);

        names.add("LElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-1.50342f, -1.50675f, -1.50675f));
        times.add(time);
        keys.add(key);

        names.add("LHand");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.3f, 0.3f, 0.3f));
        times.add(time);
        keys.add(key);

        names.add("LHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.33877f, -0.33954f, -0.33954f));
        times.add(time);
        keys.add(key);

        names.add("LHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00472597f, 0.0113958f, 0.0113958f));
        times.add(time);
        keys.add(key);

        names.add("LHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00363276f, -0.00363276f, -0.00363276f));
        times.add(time);
        keys.add(key);

        names.add("LKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.854553f, 0.847586f, 0.847586f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(1.83727f, 1.84059f, 1.84059f));
        times.add(time);
        keys.add(key);

        names.add("LShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.30552f, 0.327338f, 0.327338f));
        times.add(time);
        keys.add(key);

        names.add("LWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00761449f, 0.00761449f, 0.00761449f));
        times.add(time);
        keys.add(key);

        names.add("RAnklePitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.509694f, -0.508626f, -0.508626f));
        times.add(time);
        keys.add(key);


        names.add("RAnkleRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00472571f, -0.0113954f, -0.0113954f));
        times.add(time);
        keys.add(key);

        names.add("RElbowRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.526486f, 1.47023f, 1.47023f));
        times.add(time);
        keys.add(key);

        names.add("RElbowYaw");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(1.49999f, -0.169255f, -0.169255f));
        times.add(time);
        keys.add(key);

        names.add("RHand");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(1f, 0.00891621f, 0.00891621f));
        times.add(time);
        keys.add(key);

        names.add("RHipPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.333611f, -0.342722f, -0.342722f));
        times.add(time);
        keys.add(key);

        names.add("RHipRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00472564f, 0.0113955f, 0.0113955f));
        times.add(time);
        keys.add(key);

        names.add("RHipYawPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(-0.00363276f, -0.00363276f, -0.00363276f));
        times.add(time);
        keys.add(key);

        names.add("RKneePitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.849768f, 0.847586f, 0.847586f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderPitch");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(1.18237f, 0.137054f, 0.137054f));
        times.add(time);
        keys.add(key);

        names.add("RShoulderRoll");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.223531f, 0.112291f, 0.112291f));
        times.add(time);
        keys.add(key);

        names.add("RWristYaw");
        time = new ArrayList<Float>(Arrays.asList(0.44f, 0.96f, 2.36f));
        key = new ArrayList<Float>(
                Arrays.asList(0.00761449f, 0.33703f, 0.33703f));
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

        ElbowBump elbowBump = new ElbowBump();

        elbowBump.run(application.session());


    }

    public void run(Session session) throws Exception {

        ALMotion motion = new ALMotion(session);

        ALRobotPosture posture = new ALRobotPosture(session);
        ALTextToSpeech tts  = new ALTextToSpeech(session);


        motion= new ALMotion(session);
        posture= new ALRobotPosture(session);

        tts = new ALTextToSpeech(session);
        motion.wakeUp();
        posture.goToPosture("Stand",0.8f);
        motion.walkTo(0.3f,0f,0f);
        tts.say(" hello partner, how are you doing today?");
        disPlayHandShake(motion);

        tts.say("oh, it's not a good idea to do hand shake during the covid-19.Let's try elbow bump");

        disPlayElbowBump(motion);



        //posture.goToPosture("Stand",0.2f);

    }





}
