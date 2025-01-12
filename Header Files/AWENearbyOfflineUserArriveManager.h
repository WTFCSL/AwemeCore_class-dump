//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyOfflineUserArriveManager : NSObject <AWENearbyOfflineUserArriveManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)firstArriveInfo:(id)arg0 firstArriveTS:(id)arg1;
+ (void)trackInsertResultWithErrorMsg:(id)arg0 msg:(id)arg1;
+ (void)updataFirstArriveInfoWitLogId:(id)arg0 poiID:(id)arg1 expirationTime:(double)arg2;
+ (void)removeAllFirstArriveInfo;
+ (void)removeCacheUserArriveInfo;
+ (id)getFirstArriveTSWithLogID:(id)arg0;
+ (long long)arriveTimesFromFirstArrive;
+ (id)getFirstArriveInfoArray;
+ (id)checkTheSamePoiID:(id)arg0;
+ (id)updataUserArriveParamWithPoiId:(id)arg0 firstArriveTS:(id)arg1 naturalDayFirstTS:(id)arg2 expirationTS:(long long)arg3 arriveTimes:(long long)arg4;
+ (BOOL)checkNaturalDayFirstTSValid:(id)arg0;
+ (long long)upDataExpirationTSWithDic:(id)arg0 expirationTS:(long long)arg1;
+ (void)cacheUserArriveInfoWithDic:(id)arg0;
+ (void)removeFirstArriveWithLogID:(id)arg0;
+ (id)getLogIDFromMsg:(id)arg0;
+ (id)firstArriveParamsWithTS:(id)arg0 logID:(id)arg1;
+ (void)cacheFirstArriveInfoWithParams:(id)arg0;
+ (id)getUserArriveInfoDic;
+ (void)appendOfflineCardParamToDcard:(id)arg0 logID:(id)arg1 expirationTime:(double)arg2;

@end
