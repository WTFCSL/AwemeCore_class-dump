//
//     Generated by private class-dump
//

@interface AWEStickerLyricFontManager : NSObject

+ (id)formatFontDicWithJSONStr:(id)arg0;
+ (void)fetchLyricFontResourceWithFontName:(id)arg0 completion:(id /* block */)arg1;
+ (void)downloadLyricFontIfNeeded;
+ (id)effectModelWithFontName:(id)arg0;
+ (id)formatFontDicWithJSONStr:(id)arg0 key:(id)arg1;
+ (void)downloadLyricFontWithEffectModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchLyricFontEffectModelsWithCompletion:(id /* block */)arg0;

@end
