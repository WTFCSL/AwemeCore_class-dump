//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEShareDynamicSortManager : NSObject <AWEShareMessage, AWEShareDynamicSortManagerProtocol> {
    NSMutableDictionary *_channelSortOperations;
    NSMutableDictionary *_actionSortOperations;
    NSMutableDictionary *_allSortOperations;
    NSMutableDictionary *_sortChannelPriority;
    NSMutableDictionary *_sortActionPriority;
    NSMutableDictionary *_sortAllPriority;
}

@property (retain, nonatomic) NSMutableDictionary *channelSortOperations;
@property (retain, nonatomic) NSMutableDictionary *actionSortOperations;
@property (retain, nonatomic) NSMutableDictionary *allSortOperations;
@property (retain, nonatomic) NSMutableDictionary *sortChannelPriority;
@property (retain, nonatomic) NSMutableDictionary *sortActionPriority;
@property (retain, nonatomic) NSMutableDictionary *sortAllPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)updateShareType:(id)arg0 withSortStrategy:(id)arg1 inChannel:(BOOL)arg2;
- (void)updateShareType:(id)arg0 withSortOperation:(id)arg1 sortStyle:(long long)arg2;
- (void)didConfigureShareView:(id)arg0 withContext:(id)arg1;
- (void)p_sortShareTypes:(id)arg0 sortStyle:(long long)arg1;
- (void)sortChannels:(id)arg0 usingSorting:(id)arg1;
- (void)p_sortChannel:(id)arg0 channelTypes:(id)arg1 actionTypes:(id)arg2;
- (id)sortChannelPriority;
- (id)channelSortOperations;
- (id)sortActionPriority;
- (id)actionSortOperations;
- (id)sortAllPriority;
- (id)allSortOperations;
- (void)insert:(id)arg0 atIndex:(long long)arg1 shareTypes:(id)arg2;
- (void)insert:(id)arg0 before:(id)arg1 shareTypes:(id)arg2;
- (void)insert:(id)arg0 after:(id)arg1 shareTypes:(id)arg2;
- (void)swap:(id)arg0 with:(long long)arg1 shareTypes:(id)arg2;
- (void)minInsert:(id)arg0 atIndex:(long long)arg1 shareTypes:(id)arg2;
- (void)setSortActionPriority:(id)arg0;
- (void)setSortChannelPriority:(id)arg0;
- (void)setSortAllPriority:(id)arg0;
- (void)setChannelSortOperations:(id)arg0;
- (void)setActionSortOperations:(id)arg0;
- (void)setAllSortOperations:(id)arg0;
- (void)cleanOldSortMessage;
- (void)sortChannels:(id)arg0 withContext:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end