//
//     Generated by private class-dump
//

@class HTSEventContext;

@interface IESLiveViewingHistoryEntranceViewModel : NSObject {
    HTSEventContext *_trackContext;
    id /* block */ _entranceEnent;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ entranceEnent;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)firstShow;
- (id)initWithTrackContext:(id)arg0 entranceEnent:(id /* block */)arg1;
- (void)trackHistoryShow;
- (void)clickHistoryButton;
- (id)yellowPointTipViewKey;
- (id /* block */)entranceEnent;
- (void)trackHistoryClick;
- (void)trackHistory:(id)arg0;
- (BOOL)isShowBubbleGuide;
- (void)setEntranceEnent:(id /* block */)arg0;
- (void).cxx_destruct;

@end
