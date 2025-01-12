//
//     Generated by private class-dump
//

@class RxMultipleDelegate;
@protocol AWEMusicPreferencesDelegate;

@interface AWEMusicPreferences : NSObject {
    RxMultipleDelegate<AWEMusicPreferencesDelegate> *_multipleDelegate;
}

@property (retain, nonatomic) RxMultipleDelegate<AWEMusicPreferencesDelegate> *multipleDelegate;
@property (nonatomic) unsigned long long loopMode;

+ (id)shared;

- (void)setLoopMode:(unsigned long long)arg0;
- (unsigned long long)loopMode;
- (id)multipleDelegate;
- (void)setMultipleDelegate:(id)arg0;
- (void).cxx_destruct;
- (id)storage;
- (void)addObserver:(id)arg0;

@end
