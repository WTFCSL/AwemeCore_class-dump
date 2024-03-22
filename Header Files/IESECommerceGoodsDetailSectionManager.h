//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface IESECommerceGoodsDetailSectionManager : NSObject {
    NSArray *_fullSectionOrder;
    NSArray *_fullModuleNameOrder;
    NSArray *_showSectionNames;
    NSArray *_showModuleNames;
    NSMutableDictionary *_moduleNameFor;
    NSMutableDictionary *_sectionFor;
    NSMutableDictionary *_sectionShowMap;
}

@property (retain, nonatomic) NSArray *showSectionNames;
@property (retain, nonatomic) NSArray *showModuleNames;
@property (retain, nonatomic) NSArray *fullSectionOrder;
@property (retain, nonatomic) NSArray *fullModuleNameOrder;
@property (retain, nonatomic) NSMutableDictionary *moduleNameFor;
@property (retain, nonatomic) NSMutableDictionary *sectionFor;
@property (retain, nonatomic) NSMutableDictionary *sectionShowMap;

- (id)initWithModuleNameOrder:(id)arg0;
- (void)prepareOrderWith:(id)arg0;
- (void)bindSection:(long long)arg0 withModule:(id)arg1;
- (void)orderSection:(long long)arg0 withModule:(id)arg1;
- (id)sectionFor:(id)arg0;
- (id)mfullSectionOrder;
- (id)mfullModuleNameOrder;
- (id)moduleNameFor;
- (id)sectionFor;
- (void)setSectionShowMap:(id)arg0;
- (id)moduleNameFor:(long long)arg0;
- (id)sectionShowMap;
- (id)fullModuleNameOrder;
- (void)setShowSectionNames:(id)arg0;
- (void)setShowModuleNames:(id)arg0;
- (void)startGeneratingSectionOrder;
- (void)hidenSection:(long long)arg0;
- (void)showSection:(long long)arg0;
- (void)hidenModule:(id)arg0;
- (void)showModule:(id)arg0;
- (id)endGeneratingSectionOrder;
- (id)isShowSection:(long long)arg0;
- (id)fullSectionOrder;
- (void)setFullSectionOrder:(id)arg0;
- (void)setFullModuleNameOrder:(id)arg0;
- (id)showSectionNames;
- (id)showModuleNames;
- (void)setModuleNameFor:(id)arg0;
- (void)setSectionFor:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end