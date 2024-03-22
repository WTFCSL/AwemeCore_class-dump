//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEPostLocatePitayaModel : NSObject {
    BOOL _hasPredictedLocate;
    BOOL _hasClickedBtn;
    BOOL _hasPlayedLocateItem;
    BOOL _usedPreload;
    NSString *_locateItemID;
    double _videoPlayedDuration;
    long long _videoPlayedCount;
    NSMutableSet *_prefixPlayedAwemeIDSet;
    NSMutableSet *_suffixPlayedAwemeIDSet;
}

@property (copy, nonatomic) NSString *locateItemID;
@property (nonatomic) BOOL hasPredictedLocate;
@property (nonatomic) BOOL hasClickedBtn;
@property (nonatomic) double videoPlayedDuration;
@property (nonatomic) long long videoPlayedCount;
@property (retain, nonatomic) NSMutableSet *prefixPlayedAwemeIDSet;
@property (retain, nonatomic) NSMutableSet *suffixPlayedAwemeIDSet;
@property (nonatomic) BOOL hasPlayedLocateItem;
@property (nonatomic) BOOL usedPreload;

- (double)videoPlayedDuration;
- (void)setVideoPlayedDuration:(double)arg0;
- (BOOL)hasPredictedLocate;
- (id)locateItemID;
- (id)prefixPlayedAwemeIDSet;
- (id)suffixPlayedAwemeIDSet;
- (void)setHasPlayedLocateItem:(BOOL)arg0;
- (void)updateVideoPlay:(id)arg0 playTime:(double)arg1 dataSource:(id)arg2;
- (void)setLocateItemID:(id)arg0;
- (void)setHasPredictedLocate:(BOOL)arg0;
- (BOOL)hasClickedBtn;
- (void)setHasClickedBtn:(BOOL)arg0;
- (long long)videoPlayedCount;
- (void)setVideoPlayedCount:(long long)arg0;
- (void)setPrefixPlayedAwemeIDSet:(id)arg0;
- (void)setSuffixPlayedAwemeIDSet:(id)arg0;
- (BOOL)hasPlayedLocateItem;
- (BOOL)usedPreload;
- (void)setUsedPreload:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end