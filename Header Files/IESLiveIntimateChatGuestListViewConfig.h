//
//     Generated by private class-dump
//

@class HTSInteractionStreamAppData, IESLiveMultiInteractUserService;
@protocol IESLiveIntimateChatGuestListViewDelegate;

@interface IESLiveIntimateChatGuestListViewConfig : NSObject {
    double _itemPortraitSpace;
    double _itemSideLength;
    HTSInteractionStreamAppData *_appData;
    IESLiveMultiInteractUserService *_userService;
    id<IESLiveIntimateChatGuestListViewDelegate> _delegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemSideLength;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (weak, nonatomic) id<IESLiveIntimateChatGuestListViewDelegate> delegate;

- (id)userService;
- (void)setUserService:(id)arg0;
- (double)itemPortraitSpace;
- (void)setItemPortraitSpace:(double)arg0;
- (void)setItemSideLength:(double)arg0;
- (double)itemSideLength;
- (void).cxx_destruct;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
