//
//     Generated by private class-dump
//

@class AWEMemoriesPlayerConfigBottomBuilder, NSString, AWEMemoriesPlayerConfigContentDisplayAreaBuilder, AWEMemoriesPlayerConfigGestureBuilder, AWEMemoriesPlayerConfigTopBuilder;

@interface AWEMemoriesPlayerConfigManager : NSObject <AWEMemoriesPlayerConfigProtocol, AWEMemoriesPlayerChangedBlockNotiInfo> {
    NSString *_emptyViewText;
    AWEMemoriesPlayerConfigTopBuilder *_topBuilder;
    AWEMemoriesPlayerConfigBottomBuilder *_bottomBuilder;
    AWEMemoriesPlayerConfigGestureBuilder *_gestureBuilder;
    AWEMemoriesPlayerConfigContentDisplayAreaBuilder *_contetnAreaBuilder;
    id /* block */ _tileModelChanged;
}

@property (copy, nonatomic) id /* block */ tileModelChanged;
@property (retain, nonatomic) AWEMemoriesPlayerConfigTopBuilder *topBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigBottomBuilder *bottomBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigGestureBuilder *gestureBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigContentDisplayAreaBuilder *contetnAreaBuilder;
@property (copy, nonatomic) NSString *emptyViewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEmptyViewText:(id)arg0;
- (void)configTopBarWithBuilder:(id /* block */)arg0;
- (void)configBottomBarWithBuilder:(id /* block */)arg0;
- (void)configGestureWithBuilder:(id /* block */)arg0;
- (id)topBuilder;
- (void)updatePlayerFromCurrentPlayerTileModelChanged:(id /* block */)arg0;
- (id)bottomBuilder;
- (void)setTopBuilder:(id)arg0;
- (void)setBottomBuilder:(id)arg0;
- (id)contetnAreaBuilder;
- (void)setContetnAreaBuilder:(id)arg0;
- (id)gestureBuilder;
- (void)setGestureBuilder:(id)arg0;
- (id /* block */)tileModelChanged;
- (void)setTileModelChanged:(id /* block */)arg0;
- (void)configContentAreaWithBuilder:(id /* block */)arg0;
- (id)emptyViewText;
- (void)updateCurrentPlayerTileModel:(id)arg0;
- (void).cxx_destruct;

@end
