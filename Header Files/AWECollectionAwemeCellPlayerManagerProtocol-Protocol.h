//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@protocol AWECollectionAwemeCellPlayerManagerProtocol <NSObject>

@property (readonly, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (copy, nonatomic) id /* block */ awemeCellPlayerDidChange;
@property (copy, nonatomic) id /* block */ awemeCellPlayerDidStop;

- (id)currentAwemeModel;
- (void)stopAndHidePreviousPlayer;
- (id /* block */)awemeCellPlayerDidStop;
- (id /* block */)awemeCellPlayerDidChange;
- (void)updatePlayerIfNeededWithContext:(id)arg0;
- (void)setAwemeCellPlayerDidChange:(id /* block */)arg0;
- (void)setAwemeCellPlayerDidStop:(id /* block */)arg0;

@end