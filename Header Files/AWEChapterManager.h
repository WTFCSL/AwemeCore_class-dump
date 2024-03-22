//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEChapterManager : NSObject <AWEChapterManagerProtocol> {
    BOOL _chapterCatalogPanelShowing;
    NSMutableDictionary *_chapterSwtichDict;
}

@property (retain, nonatomic) NSMutableDictionary *chapterSwtichDict;
@property (nonatomic) BOOL chapterCatalogPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chapterConfig;
+ (id)sharedManager;

- (BOOL)chapterCatalogPanelShowing;
- (void)setChapterCatalogPanelShowing:(BOOL)arg0;
- (BOOL)shouldShowChapterProgressSwitchWithModel:(id)arg0;
- (BOOL)shouldShowChapterProgressBarWithModel:(id)arg0;
- (void)switchChapterProgress:(BOOL)arg0 withModel:(id)arg1;
- (void)setChapterSwtichDict:(id)arg0;
- (id)chapterSwtichDict;
- (id)init;
- (void).cxx_destruct;

@end