//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSMutableArray, IESLiveLongPressAwemeStyleFuncModel;
@protocol IESLiveRoomService, IESLiveLongPressActions, IESLiveLongPressViewModelReation;

@interface IESLiveLongPressAwemeStyleViewModel : NSObject {
    BOOL _inRoom;
    id<IESLiveLongPressViewModelReation> _reaction;
    id<IESLiveRoomService> _room;
    NSDictionary *_trackContext;
    id<IESLiveLongPressActions> _longPressActionCreator;
    id /* block */ _complete;
    NSArray *_longPressItemConfig;
    IESLiveLongPressAwemeStyleFuncModel *_recommendIMModel;
    NSMutableArray *_longPressActionArray;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) id<IESLiveLongPressActions> longPressActionCreator;
@property (copy, nonatomic) id /* block */ complete;
@property (retain, nonatomic) NSArray *longPressItemConfig;
@property (retain, nonatomic) IESLiveLongPressAwemeStyleFuncModel *recommendIMModel;
@property (retain, nonatomic) NSMutableArray *longPressActionArray;
@property (weak, nonatomic) id<IESLiveLongPressViewModelReation> reaction;
@property (nonatomic) BOOL inRoom;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)allowShare;
- (id)buildCommonParams;
- (id)longPressItemConfig;
- (void)trackLiveWindowClick;
- (void)trackLiveWindowShow;
- (void)trackDouPlusEvent:(id)arg0 withIndex:(unsigned long long)arg1;
- (id)initWithRoom:(id)arg0 trackcontext:(id)arg1;
- (BOOL)inRoom;
- (id)longPressActionCreator;
- (void)setLongPressActionCreator:(id)arg0;
- (void)setInRoom:(BOOL)arg0;
- (id)recommendIMModel;
- (id)addRecommendIMModel:(id)arg0;
- (id)generateRemindModel:(id)arg0;
- (id)addOptimizeRecommendModel:(id)arg0;
- (id)addFollowModel:(id)arg0;
- (id)addDislikeCurrentLiveModel:(id)arg0;
- (id)addDislikeLive:(id)arg0;
- (id)addReportModel:(id)arg0;
- (id)addPipModel:(id)arg0;
- (id)generateWidgetModel:(id)arg0;
- (id)desktopGuideCommonParams;
- (long long)getSectionTypeFromItemType:(long long)arg0;
- (id)addRecordModel:(id)arg0;
- (id)addAudioReportModel:(id)arg0;
- (id)addPKReportModel:(id)arg0;
- (id)addDouPlusModel:(id)arg0 withUrl:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setLongPressActionArray:(id)arg0;
- (void)trackerRecommendToFriendsGuideShow;
- (void)trackerRecommendToFriends:(id)arg0;
- (void)setRecommendIMModel:(id)arg0;
- (void)trackerShowRecommendToFriends:(id)arg0;
- (void)trackEventForDesktopGuideShowWithType:(id)arg0;
- (void)trackEventForDesktopGuideClickWithType:(id)arg0;
- (void)showWidgetGuideView;
- (void)trackRecordShow;
- (id)itemConfigWithIdentity:(id)arg0 from:(id)arg1;
- (void)trackEvent:(id)arg0 withParam:(id)arg1;
- (void)setLongPressItemConfig:(id)arg0;
- (void)buildLongPressActionArray:(id /* block */)arg0;
- (id)addDislikeContentModel:(id)arg0;
- (id)addDislikeAnchorModel:(id)arg0;
- (id)longPressActionArray;
- (void).cxx_destruct;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end