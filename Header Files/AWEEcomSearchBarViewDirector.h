//
//     Generated by private class-dump
//

@class NSString, AWEEcomSearchBarView;

@interface AWEEcomSearchBarViewDirector : NSObject <AWEEcomSearchEventSubscriber> {
    unsigned long long _ecomSearchBarType;
    long long _ECSearchAmbientOpt;
    AWEEcomSearchBarView *_barView;
    long long _uiThemeStyle;
}

@property (nonatomic) unsigned long long ecomSearchBarType;
@property (nonatomic) long long ECSearchAmbientOpt;
@property (weak, nonatomic) AWEEcomSearchBarView *barView;
@property (nonatomic) long long uiThemeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveBarViewDirector:(id)arg0;
+ (id)defaultBarViewDirector:(id)arg0;

- (void)moveToPage:(long long)arg0 fromPage:(long long)arg1;
- (long long)ECSearchAmbientOpt;
- (void)setECSearchAmbientOpt:(long long)arg0;
- (id)initWithBarView:(id)arg0;
- (void)setUiThemeStyle:(long long)arg0;
- (void)setEcomSearchBarType:(unsigned long long)arg0;
- (void)initStat:(long long)arg0;
- (void)updateThemeForChange:(long long)arg0;
- (void)privacyStateChanged:(id)arg0;
- (void)updateSearchBarType:(unsigned long long)arg0;
- (unsigned long long)ecomSearchBarType;
- (long long)uiThemeStyle;
- (void).cxx_destruct;
- (id)barView;
- (void)setBarView:(id)arg0;

@end
