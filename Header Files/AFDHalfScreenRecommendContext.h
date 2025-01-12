//
//     Generated by private class-dump
//

@class NSString, AFDLongPressContext, AWEAwemeModel, NSNumber;

@interface AFDHalfScreenRecommendContext : NSObject {
    BOOL _loadingAfterShow;
    BOOL _showActionSection;
    BOOL _showCommonRelationSection;
    BOOL _videoPlayingWhenShowing;
    BOOL _dataLoaded;
    AFDLongPressContext *_longPressContext;
    AWEAwemeModel *_aweme;
    NSString *_enterFrom;
    NSString *_referString;
    long long _scene;
    long long _recType;
    long long _commonRelationDataStatus;
    long long _commonRelationType;
    NSNumber *_prePageType;
    NSNumber *_fromPageType;
    id /* block */ _videoPlayBlock;
    id /* block */ _videoPauseBlock;
}

@property (retain, nonatomic) AFDLongPressContext *longPressContext;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL loadingAfterShow;
@property (nonatomic) BOOL showActionSection;
@property (nonatomic) BOOL showCommonRelationSection;
@property (nonatomic) BOOL videoPlayingWhenShowing;
@property (nonatomic) BOOL dataLoaded;
@property (nonatomic) long long recType;
@property (nonatomic) long long commonRelationDataStatus;
@property (nonatomic) long long commonRelationType;
@property (retain, nonatomic) NSNumber *prePageType;
@property (retain, nonatomic) NSNumber *fromPageType;
@property (copy, nonatomic) id /* block */ videoPlayBlock;
@property (copy, nonatomic) id /* block */ videoPauseBlock;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (id)aweme;
- (id)longPressContext;
- (void)setAweme:(id)arg0;
- (void)setPrePageType:(id)arg0;
- (void)setFromPageType:(id)arg0;
- (id)fromPageType;
- (id)prePageType;
- (long long)commonRelationDataStatus;
- (BOOL)videoPlayingWhenShowing;
- (id /* block */)videoPauseBlock;
- (BOOL)showCommonRelationSection;
- (long long)recType;
- (id /* block */)videoPlayBlock;
- (BOOL)loadingAfterShow;
- (void)setCommonRelationDataStatus:(long long)arg0;
- (void)setCommonRelationType:(long long)arg0;
- (void)setLoadingAfterShow:(BOOL)arg0;
- (BOOL)showActionSection;
- (void)setLongPressContext:(id)arg0;
- (void)setShowActionSection:(BOOL)arg0;
- (void)setShowCommonRelationSection:(BOOL)arg0;
- (void)setVideoPlayingWhenShowing:(BOOL)arg0;
- (void)setRecType:(long long)arg0;
- (long long)commonRelationType;
- (void)setVideoPlayBlock:(id /* block */)arg0;
- (void)setVideoPauseBlock:(id /* block */)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (long long)scene;
- (void)setDataLoaded:(BOOL)arg0;
- (BOOL)dataLoaded;

@end
