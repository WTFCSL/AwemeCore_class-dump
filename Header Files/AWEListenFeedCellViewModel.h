//
//     Generated by private class-dump
//

@class AWEListenFeedPlayModel, AWEMixVideoModel, AWEAwemeModel, AWEMixVideoListDataController, NSMutableArray;

@interface AWEListenFeedCellViewModel : NSObject {
    BOOL _isNeedPlay;
    BOOL _hasPreload;
    BOOL _isRequesting;
    AWEAwemeModel *_model;
    AWEListenFeedPlayModel *_playModel;
    NSMutableArray *_extendModelArray;
    AWEMixVideoModel *_mixVideoModel;
    AWEMixVideoListDataController *_dataController;
}

@property (retain, nonatomic) NSMutableArray *extendModelArray;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) AWEMixVideoListDataController *dataController;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (nonatomic) BOOL isNeedPlay;
@property (nonatomic) BOOL hasPreload;

- (void)setDataController:(id)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)setPlayModel:(id)arg0;
- (id)playModel;
- (id)extendModelArray;
- (id)currentExtendModelArray;
- (id)currentMixVideoModel;
- (long long)currentModelIndex;
- (BOOL)isSupportedExtend;
- (void)requestMixVideoDetailWithCompletion:(id /* block */)arg0;
- (void)requestPreExtendModelArrayWithCompletion:(id /* block */)arg0;
- (void)requestNextExtendModelArrayWithCompletion:(id /* block */)arg0;
- (BOOL)isSupportedMixType;
- (id)mixVideoModel;
- (void)setHasPreload:(BOOL)arg0;
- (void)setExtendModelArray:(id)arg0;
- (void)setIsNeedPlay:(BOOL)arg0;
- (void)setMixVideoModel:(id)arg0;
- (void)initRequestExtendModelArrayWithCompletion:(id /* block */)arg0;
- (long long)currentMaxEpisode;
- (id)supportedMixVideoModel;
- (id)currentMixCoverURL;
- (BOOL)isNeedPlay;
- (BOOL)hasPreload;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)dataController;
- (long long)currentEpisode;

@end