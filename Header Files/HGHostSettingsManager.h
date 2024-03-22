//
//     Generated by private class-dump
//

@protocol HGHostSettingsDelegate;

@interface HGHostSettingsManager : NSObject {
    id<HGHostSettingsDelegate> _delegate;
}

@property (retain, nonatomic) id<HGHostSettingsDelegate> delegate;

+ (id)sharedManager;

- (void)updateConfig:(id)arg0;
- (id)arrayValueForKey:(id)arg0;
- (BOOL)boolValueForKey:(id)arg0;
- (void).cxx_destruct;
- (id)stringValueForKey:(id)arg0;
- (double)floatValueForKey:(id)arg0;
- (id)delegate;
- (long long)integerValueForKey:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)dictionaryValueForKey:(id)arg0;

@end
