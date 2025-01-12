//
//     Generated by private class-dump
//

@class NSString, AWEProfileLynxConfiguration, NSDictionary, NSNumber;

@interface AWEProfileLynxViewModel : NSObject {
    BOOL _isLoading;
    BOOL _isOptimized;
    BOOL _fromHome;
    NSString *_containerID;
    long long _defaultLynxVisiableHeight;
    NSString *_exraInfo;
    AWEProfileLynxConfiguration *_config;
    struct CGSize { double width; double height; } _containerSize;
    struct CGPoint { double x; double y; } _savedContentOffset;
    struct CGPoint { double x; double y; } _lastContentOffset;
    struct CGPoint { double x; double y; } _lastLynxContentOffset;
}

@property (retain, nonatomic) AWEProfileLynxConfiguration *config;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) long long defaultLynxVisiableHeight;
@property (nonatomic) BOOL isOptimized;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLynxContentOffset;
@property (nonatomic) BOOL fromHome;
@property (readonly, nonatomic) NSDictionary *commonTrackDict;
@property (readonly, nonatomic) NSNumber *tabId;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSDictionary *queryDict;
@property (readonly, nonatomic) NSDictionary *globalProps;
@property (readonly, nonatomic) NSDictionary *profileNewSchemaDict;
@property (copy, nonatomic) NSString *exraInfo;

- (id)tabId;
- (id)globalProps;
- (BOOL)isOptimized;
- (id)queryDict;
- (BOOL)fromHome;
- (void)setFromHome:(BOOL)arg0;
- (id)commonTrackDict;
- (void)setSavedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })savedContentOffset;
- (id)serverMobParams;
- (id)profileNewSchemaDict;
- (double)getLynxContainerMaxHeight;
- (double)getTabbarHeight;
- (long long)defaultLynxVisiableHeight;
- (id)getLynxPageBgColor;
- (double)getDefaultLynxVisiableHeight:(double)arg0;
- (void)setExraInfo:(id)arg0;
- (void)setLastLynxContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsOptimized:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastLynxContentOffset;
- (id)exraInfo;
- (void)setDefaultLynxVisiableHeight:(long long)arg0;
- (BOOL)isLoading;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setContainerID:(id)arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (id)config;
- (id)scheme;
- (id)initWithConfiguration:(id)arg0;
- (void)setIsLoading:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastContentOffset;
- (void)setLastContentOffset:(struct CGPoint { double x0; double x1; })arg0;

@end
