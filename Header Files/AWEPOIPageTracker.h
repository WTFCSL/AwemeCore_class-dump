//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDate;

@interface AWEPOIPageTracker : NSObject {
    BOOL _isFirstOpen;
    BOOL _requestSucceed;
    NSString *_pageName;
    NSString *_lastEvent;
    NSString *_lastAnchorEvent;
    NSString *_sessionID;
    double _startTime;
    double _lastTime;
    NSDate *_requestStartTime;
    NSMutableDictionary *_cardDict;
    NSMutableDictionary *_cardUploadDict;
    NSMutableDictionary *_timeDict;
    NSMutableDictionary *_eventParams;
}

@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL isFirstOpen;
@property (copy, nonatomic) NSString *lastEvent;
@property (copy, nonatomic) NSString *lastAnchorEvent;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double startTime;
@property (nonatomic) double lastTime;
@property (retain, nonatomic) NSDate *requestStartTime;
@property (nonatomic) BOOL requestSucceed;
@property (retain, nonatomic) NSMutableDictionary *cardDict;
@property (retain, nonatomic) NSMutableDictionary *cardUploadDict;
@property (retain, nonatomic) NSMutableDictionary *timeDict;
@property (retain, nonatomic) NSMutableDictionary *eventParams;

+ (id)pageOpenedStates;

- (void)setIsFirstOpen:(BOOL)arg0;
- (BOOL)isFirstOpen;
- (void)setEventParams:(id)arg0;
- (id)initWithPageName:(id)arg0 sessionID:(id)arg1 startTime:(double)arg2;
- (void)setCardDict:(id)arg0;
- (void)setCardUploadDict:(id)arg0;
- (void)setTimeDict:(id)arg0;
- (void)trackWithName:(id)arg0 time:(double)arg1 isAnchor:(BOOL)arg2 onlyOnce:(BOOL)arg3 extraParams:(id)arg4;
- (void)setRequestSucceed:(BOOL)arg0;
- (id)cardDict;
- (id)paramsWithTime:(double)arg0 lastEvent:(id)arg1 extraParams:(id)arg2;
- (id)cardUploadDict;
- (id)lastAnchorEvent;
- (BOOL)requestSucceed;
- (void)trackWithName:(id)arg0 time:(double)arg1 lastEvent:(id)arg2 isAnchor:(BOOL)arg3 onlyOnce:(BOOL)arg4 extraParams:(id)arg5;
- (id)timeDict;
- (void)trackHmdWithService:(id)arg0 params:(id)arg1;
- (void)setLastAnchorEvent:(id)arg0;
- (id)eventTrackerParamsExceptCardFill;
- (id)initWithPageName:(id)arg0 sessionID:(id)arg1;
- (void)markPageCreateOnlyOnce:(BOOL)arg0 time:(double)arg1 params:(id)arg2;
- (void)markRequestSendOnlyOnce:(BOOL)arg0 time:(double)arg1 params:(id)arg2;
- (void)markRequestCostOnlyOnce:(BOOL)arg0 time:(double)arg1 realStartTime:(id)arg2 totalDuration:(id)arg3 receivedBytes:(id)arg4 serverDuration:(id)arg5 extraParams:(id)arg6;
- (void)markRequestFinishOnlyOnce:(BOOL)arg0 time:(double)arg1 result:(BOOL)arg2 failedReason:(id)arg3 extraParams:(id)arg4;
- (void)markContentFillStartOnlyOnce:(BOOL)arg0 time:(double)arg1 params:(id)arg2;
- (void)markCardFillWithCardName:(id)arg0 time:(double)arg1 cardType:(long long)arg2 result:(BOOL)arg3 duration:(double)arg4 extraParams:(id)arg5;
- (void)markFMPCompletedOnlyOnce:(BOOL)arg0 duration:(double)arg1 isRetry:(BOOL)arg2 isNew:(BOOL)arg3 extraParams:(id)arg4;
- (void)markPageBounceOnlyOnce:(BOOL)arg0 isFmpEnd:(BOOL)arg1 time:(double)arg2 type:(long long)arg3 extraParams:(id)arg4;
- (void)markEventWithName:(id)arg0 onlyOnce:(BOOL)arg1 time:(double)arg2 lastEvent:(id)arg3 extraParams:(id)arg4;
- (id)requestStartTime;
- (void)setLastTime:(double)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (id)lastEvent;
- (double)lastTime;
- (double)startTime;
- (void)setRequestStartTime:(id)arg0;
- (void)setLastEvent:(id)arg0;
- (id)eventParams;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end