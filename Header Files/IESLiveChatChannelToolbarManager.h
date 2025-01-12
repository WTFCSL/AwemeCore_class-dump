//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSMutableArray, IESLiveChatChannelToolbar;

@interface IESLiveChatChannelToolbarManager : NSObject {
    NSArray *_indexDict;
    NSMutableArray *_toolbarItems;
    IESLiveChatChannelToolbar *_toolbar;
    NSNumber *_channelID;
    unsigned long long _publicScreenType;
}

@property (retain, nonatomic) NSArray *indexDict;
@property (retain, nonatomic) NSMutableArray *toolbarItems;
@property (weak, nonatomic) IESLiveChatChannelToolbar *toolbar;
@property (retain, nonatomic) NSNumber *channelID;
@property (nonatomic) unsigned long long publicScreenType;

- (BOOL)containItem:(id)arg0;
- (void)reloadToolbar;
- (void)setPublicScreenType:(unsigned long long)arg0;
- (unsigned long long)publicScreenType;
- (void)bindWithToolbar:(id)arg0;
- (BOOL)containIdentifier:(id)arg0;
- (void)updatePublicScreenInfoModel:(id)arg0;
- (id)indexDict;
- (void)setIndexDict:(id)arg0;
- (void)removeItem:(id)arg0;
- (id)toolbar;
- (id)init;
- (id)channelID;
- (void).cxx_destruct;
- (void)removeIdentifier:(id)arg0;
- (void)setToolbarItems:(id)arg0;
- (id)toolbarItems;
- (void)insertItem:(id)arg0;
- (void)setChannelID:(id)arg0;
- (void)setToolbar:(id)arg0;
- (void)clean;

@end
