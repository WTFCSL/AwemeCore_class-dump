//
//     Generated by private class-dump
//

@class NSMutableDictionary, UIView;

@interface IESLiveRevenueInteractPreStreamModel : NSObject {
    BOOL _shouldShowTeamTaskView;
    NSMutableDictionary *_trackParams;
    long long _lynxClickEventType;
    UIView *_preStreamContainer;
    UIView *_extendView;
}

@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) long long lynxClickEventType;
@property (nonatomic) BOOL shouldShowTeamTaskView;
@property (weak, nonatomic) UIView *preStreamContainer;
@property (weak, nonatomic) UIView *extendView;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (long long)lynxClickEventType;
- (void)setPreStreamContainer:(id)arg0;
- (id)preStreamContainer;
- (BOOL)shouldShowTeamTaskView;
- (void)setShouldShowTeamTaskView:(BOOL)arg0;
- (void)setLynxClickEventType:(long long)arg0;
- (id)extendView;
- (void)setExtendView:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end