//
//     Generated by private class-dump
//

@class NSString;
@protocol AidProtocolDelegate;

@interface AidRequester : NSObject {
    id<AidProtocolDelegate> mAidDelegate;
    NSString *mOldAid;
    NSString *mAppName;
}

+ (id)postUrl:(id)arg0 token:(id)arg1 utdid:(id)arg2 oldAid:(id)arg3;
+ (id)aidFromJson:(id)arg0 oldAid:(id)arg1;
+ (BOOL)isContainStr:(id)arg0 contain:(id)arg1;

- (id)postRest:(id)arg0 token:(id)arg1 utdid:(id)arg2 oldAid:(id)arg3;
- (void)postRestAsync:(id)arg0 token:(id)arg1 utdid:(id)arg2 oldAid:(id)arg3 aidDelegate:(id)arg4;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void).cxx_destruct;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;

@end
