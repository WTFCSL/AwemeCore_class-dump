//
//     Generated by private class-dump
//

@interface DUXFontManager : NSObject {
    BOOL _elderModeOn;
    unsigned long long _fontMode;
    id /* block */ _duxOnlineFontsBlock;
}

@property (nonatomic) unsigned long long fontMode;
@property (nonatomic) BOOL elderModeOn;
@property (copy, nonatomic) id /* block */ duxOnlineFontsBlock;

+ (BOOL)bigFontModeOn;
+ (id)currentModeAttribute;
+ (BOOL)elderModeOn;
+ (unsigned long long)currentFontMode;
+ (double)scaleFotMode:(unsigned long long)arg0 curve:(unsigned long long)arg1;
+ (double)scaleForCurve:(unsigned long long)arg0;
+ (BOOL)systemFontSizeReflectOn;
+ (id)getReflectFontModeWithSystemFont;
+ (BOOL)switchToElderMode:(BOOL)arg0;
+ (BOOL)switchToFontMode:(id)arg0;
+ (void)setupOnlineFontsBlock:(id /* block */)arg0;
+ (unsigned long long)transferFontMode:(id)arg0;
+ (id /* block */)functionForCurve:(unsigned long long)arg0;
+ (double)axisXForMode:(unsigned long long)arg0;
+ (double)scaleForMode:(unsigned long long)arg0;
+ (id)getOnlineFontDataWithName:(id)arg0;
+ (id)sharedManager;
+ (double)currentScale;

- (BOOL)elderModeOn;
- (void)setElderModeOn:(BOOL)arg0;
- (unsigned long long)fontMode;
- (void)setFontMode:(unsigned long long)arg0;
- (void)setDuxOnlineFontsBlock:(id /* block */)arg0;
- (id /* block */)duxOnlineFontsBlock;
- (id)init;
- (void).cxx_destruct;
- (double)currentScale;

@end
