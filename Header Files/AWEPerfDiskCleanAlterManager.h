//
//     Generated by private class-dump
//

@class AWEStorage;

@interface AWEPerfDiskCleanAlterManager : NSObject {
    BOOL _prepared;
    BOOL _showing;
    long long _cleanSize;
    AWEStorage *_universalStorage;
}

@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic) long long cleanSize;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL showing;

+ (id)shareManager;

- (id)universalStorage;
- (long long)cleanSize;
- (void)setCleanSize:(long long)arg0;
- (void)setUniversalStorage:(id)arg0;
- (BOOL)shouldAlter;
- (void)didDismiss;
- (void).cxx_destruct;
- (void)prepare;
- (void)setPrepared:(BOOL)arg0;
- (BOOL)prepared;
- (void)didShow;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg0;
- (void)updateInfo;

@end