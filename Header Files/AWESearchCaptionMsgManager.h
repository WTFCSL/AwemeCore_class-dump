//
//     Generated by private class-dump
//

@class AWECaptionInfoModel;

@interface AWESearchCaptionMsgManager : NSObject {
    AWECaptionInfoModel *_latestCaptionMsg;
}

@property (retain, nonatomic) AWECaptionInfoModel *latestCaptionMsg;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)latestCaptionMsg;
- (void)clearMsg:(id)arg0;
- (void)registerCaptionMsgSync;
- (int)captionMsgBusinessID;
- (void)handleNewMsg:(id)arg0;
- (void)setLatestCaptionMsg:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end