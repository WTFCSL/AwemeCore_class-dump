//
//     Generated by private class-dump
//

@interface BDMotionPrivacyCertEntry : BDPrivacyCertEntry

+ (void)recordAccelerometerForDurarion:(double)arg0 withCMSensorRecorder:(id)arg1 withCert:(id)arg2 error:(id *)arg3;
+ (void)accelerometerDataFromDate:(id)arg0 toDate:(id)arg1 withCMSensorRecorder:(id)arg2 withCert:(id)arg3 error:(id *)arg4;
+ (void)queryPedometerDataFromDate:(id)arg0 toDate:(id)arg1 WithCMPedometer:(id)arg2 cert:(id)arg3 withHandler:(id /* block */)arg4;
+ (void)startPedometerUpdatesFromDate:(id)arg0 WithCMPedometer:(id)arg1 cert:(id)arg2 withHandler:(id /* block */)arg3;
+ (void)stopPedometerUpdates:(id)arg0 cert:(id)arg1 error:(id *)arg2;
+ (void)startPedometerEventUpdates:(id)arg0 cert:(id)arg1 withHandler:(id /* block */)arg2;
+ (void)stopPedometerEventUpdates:(id)arg0 cert:(id)arg1 error:(id *)arg2;
+ (void)startActivityUpdatesToQueue:(id)arg0 withManager:(id)arg1 cert:(id)arg2 withHandler:(id /* block */)arg3;
+ (void)stopActivityUpdates:(id)arg0 cert:(id)arg1 error:(id *)arg2;
+ (void)queryActivityStartingFromDate:(id)arg0 toDate:(id)arg1 toQueue:(id)arg2 withManager:(id)arg3 cert:(id)arg4 withHandler:(id /* block */)arg5;

@end