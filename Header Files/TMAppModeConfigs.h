//
//     Generated by private class-dump
//

@class NSSet;

@interface TMAppModeConfigs : NSObject {
    BOOL _enable;
    NSSet *_reportBlackPaths;
    NSSet *_reportBlackHosts;
    NSSet *_completeBlackPaths;
    NSSet *_completeBlackHosts;
}

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSSet *reportBlackPaths;
@property (retain, nonatomic) NSSet *reportBlackHosts;
@property (retain, nonatomic) NSSet *completeBlackPaths;
@property (retain, nonatomic) NSSet *completeBlackHosts;

- (id)reportBlackHosts;
- (id)reportBlackPaths;
- (id)completeBlackPaths;
- (id)transListToSet:(id)arg0;
- (void)setReportBlackPaths:(id)arg0;
- (void)setReportBlackHosts:(id)arg0;
- (void)setCompleteBlackPaths:(id)arg0;
- (void)setCompleteBlackHosts:(id)arg0;
- (id)completeBlackHosts;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)setEnable:(BOOL)arg0;

@end
