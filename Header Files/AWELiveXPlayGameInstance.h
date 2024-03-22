//
//     Generated by private class-dump
//

@class NSString, IESLiveXPlayGameModel;
@protocol XPlayItemProtocol;

@interface AWELiveXPlayGameInstance : NSObject <IESLiveXPlayGameInstance> {
    BOOL isShowing;
    IESLiveXPlayGameModel *_gameModel;
    id<XPlayItemProtocol> _xPlayItem;
}

@property (retain, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (readonly, nonatomic) BOOL isPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (BOOL)isPause;
- (id)xPlayItem;
- (id)initWithGameModel:(id)arg0;
- (void)setXPlayItem:(id)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (id)controller;
- (BOOL)isShowing;
- (id)view;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@end