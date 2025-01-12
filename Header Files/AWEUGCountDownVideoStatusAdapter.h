//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;
@protocol AWEUGCountDownVideoStatusProtocol;

@interface AWEUGCountDownVideoStatusAdapter : NSObject <AWEUGFeedVideoStatusProtocol> {
    unsigned long long _currentPlayStatus;
    AWEAwemeModel *_currentAwemeModel;
    id<AWEUGCountDownVideoStatusProtocol> _delegate;
}

@property (nonatomic) unsigned long long currentPlayStatus;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (weak, nonatomic) id<AWEUGCountDownVideoStatusProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)currentAwemeModel;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (void)pauseTaskTimerWithAweme:(id)arg0 playStatus:(unsigned long long)arg1 scene:(id)arg2;
- (void)startTaskTimerWithAweme:(id)arg0 playStatus:(unsigned long long)arg1 scene:(id)arg2;
- (void)setCurrentPlayStatus:(unsigned long long)arg0;
- (unsigned long long)currentPlayStatus;
- (void)setVideoStatusDelegate:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
