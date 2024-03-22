//
//     Generated by private class-dump
//

@class AWEUGCountDownViewConfig;

@protocol AWEUGCountDownViewProtocol <NSObject>

@property (retain, nonatomic) AWEUGCountDownViewConfig *viewConfig;
@property (readonly, nonatomic) unsigned long long currentStatus;
@property (readonly, nonatomic) unsigned long long structStatus;
@property (nonatomic) BOOL hasChangeContainer;

- (void)setupWithConfig:(id)arg0;
- (id)viewConfig;
- (void)setViewConfig:(id)arg0;
- (void)popView;
- (void)hiddenView:(BOOL)arg0 newFunction:(BOOL)arg1;
- (void)didStatusChanged:(unsigned long long)arg0;
- (void)didTimerStatusChanged:(unsigned long long)arg0;
- (unsigned long long)structStatus;
- (void)setHasChangeContainer:(BOOL)arg0;
- (void)hiddenView:(BOOL)arg0;
- (unsigned long long)viewDisplayStatus;
- (BOOL)hasChangeContainer;
- (unsigned long long)currentStatus;
- (void)didUpdateProgress:(double)arg0;
- (void)dismissView;

@end
