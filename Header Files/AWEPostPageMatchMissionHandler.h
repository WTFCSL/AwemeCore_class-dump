//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEPostPageMatchMissionListData, NSDictionary, AWEPostPageListHandler, NSArray, NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageMatchMissionHandler : NSObject <AWEPostPageMatchMissionService> {
    BOOL isVisible;
    id<AWEPostPageContext> _context;
    NSArray *_sortDescriptor;
    AWEPostPageListHandler *_list;
    AWEPostPageMatchMissionListData *_template;
    NSMutableDictionary *_registeredMap;
    NSDictionary *_itemLoadInfo;
}

@property (retain, nonatomic) AWEPostPageListHandler *list;
@property (retain, nonatomic) AWEPostPageMatchMissionListData *template;
@property (retain, nonatomic) NSMutableDictionary *registeredMap;
@property (copy, nonatomic) NSDictionary *itemLoadInfo;
@property (nonatomic) BOOL isVisible;
@property (copy, nonatomic) NSArray *sortDescriptor;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)arg0;
- (id)itemLoadInfo;
- (void)expectsToAddItem:(id)arg0;
- (id)registeredMap;
- (void)setItemLoadInfo:(id)arg0;
- (void)setRegisteredMap:(id)arg0;
- (void).cxx_destruct;
- (void)setIsVisible:(BOOL)arg0;
- (id)sortDescriptor;
- (id)list;
- (void)setList:(id)arg0;
- (id)context;
- (BOOL)isVisible;
- (void)addItem:(id)arg0 error:(id)arg1;
- (id)template;
- (void)setTemplate:(id)arg0;
- (void)setSortDescriptor:(id)arg0;

@end