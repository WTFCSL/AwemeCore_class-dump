//
//     Generated by private class-dump
//

@class NSArray;

@interface CJPayContainerConfig : JSONModel {
    BOOL _enable;
    BOOL _disableAlog;
    BOOL _disableBlankDetect;
    BOOL _enableHybridkitUA;
    BOOL _cjwebEnable;
    long long _colorDiff;
    NSArray *_urlBlockList;
    NSArray *_cjwebUrlBlockList;
    NSArray *_cjwebUrlAllowList;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL disableAlog;
@property (nonatomic) long long colorDiff;
@property (nonatomic) BOOL disableBlankDetect;
@property (copy, nonatomic) NSArray *urlBlockList;
@property (nonatomic) BOOL enableHybridkitUA;
@property (nonatomic) BOOL cjwebEnable;
@property (copy, nonatomic) NSArray *cjwebUrlBlockList;
@property (copy, nonatomic) NSArray *cjwebUrlAllowList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)disableAlog;
- (BOOL)disableBlankDetect;
- (id)cjwebUrlAllowList;
- (id)cjwebUrlBlockList;
- (BOOL)cjwebEnable;
- (BOOL)enableHybridkitUA;
- (long long)colorDiff;
- (void)setDisableAlog:(BOOL)arg0;
- (void)setColorDiff:(long long)arg0;
- (void)setDisableBlankDetect:(BOOL)arg0;
- (id)urlBlockList;
- (void)setUrlBlockList:(id)arg0;
- (void)setEnableHybridkitUA:(BOOL)arg0;
- (void)setCjwebEnable:(BOOL)arg0;
- (void)setCjwebUrlBlockList:(id)arg0;
- (void)setCjwebUrlAllowList:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end
