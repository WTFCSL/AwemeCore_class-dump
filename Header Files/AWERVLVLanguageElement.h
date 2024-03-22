//
//     Generated by private class-dump
//

@class NSString, AWERVLVLanguageView;

@interface AWERVLVLanguageElement : AWERVVideoInfoBaseElement <AWERVLVLanguageViewDelegate> {
    AWERVLVLanguageView *_languageView;
}

@property (retain, nonatomic) AWERVLVLanguageView *languageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)languageView;
- (BOOL)isSupportMultiLanguage;
- (long long)getCurrentLanguageIndex;
- (void)trackLongVideoShowWithLanguageIndex:(long long)arg0;
- (void)setLanguageView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;

@end
