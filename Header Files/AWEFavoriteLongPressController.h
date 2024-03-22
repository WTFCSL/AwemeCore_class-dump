//
//     Generated by private class-dump
//

@class AWEFavoriteLongPressData, NSString, NSDictionary, AWEAwemeModel, UIView, AWEInteractionElementVerticalPopover;
@protocol AWEInteractionElementVerticalPopoverContextProtocol, AWEInteractionElementPopoverContextProtocol, AWEInteractionElementLongPressProtocol;

@interface AWEFavoriteLongPressController : NSObject {
    BOOL _isStatusChanged;
    BOOL _isPopoverShowing;
    UIView *_targetView;
    UIView *_alignView;
    UIView *_interactionContainer;
    AWEAwemeModel *_model;
    NSDictionary *_contextDict;
    id /* block */ _completion;
    NSString *_enterFrom;
    id<AWEInteractionElementPopoverContextProtocol> _horizontalContext;
    id<AWEInteractionElementVerticalPopoverContextProtocol> _verticalContext;
    id<AWEInteractionElementLongPressProtocol> _longPressGestureManager;
    AWEFavoriteLongPressData *_longPressFavoriteData;
    AWEInteractionElementVerticalPopover *_verticalPopover;
}

@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *alignView;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isStatusChanged;
@property (nonatomic) BOOL isPopoverShowing;
@property (retain, nonatomic) id<AWEInteractionElementPopoverContextProtocol> horizontalContext;
@property (retain, nonatomic) id<AWEInteractionElementVerticalPopoverContextProtocol> verticalContext;
@property (retain, nonatomic) id<AWEInteractionElementLongPressProtocol> longPressGestureManager;
@property (retain, nonatomic) AWEFavoriteLongPressData *longPressFavoriteData;
@property (retain, nonatomic) AWEInteractionElementVerticalPopover *verticalPopover;

+ (id)sharedManager;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)contextDict;
- (void)setContextDict:(id)arg0;
- (void)config:(id)arg0;
- (id)interactionContainer;
- (void)setInteractionContainer:(id)arg0;
- (BOOL)isPopoverShowing;
- (void)setIsPopoverShowing:(BOOL)arg0;
- (id)alignView;
- (id)longPressGestureManager;
- (BOOL)isStatusChanged;
- (void)setIsStatusChanged:(BOOL)arg0;
- (void)setupVerticalContextWithData;
- (id)verticalContext;
- (void)setVerticalPopover:(id)arg0;
- (id)verticalPopover;
- (void)setupHorizontalContextWithData:(id)arg0;
- (id)horizontalContext;
- (void)setVerticalContext:(id)arg0;
- (void)setHorizontalContext:(id)arg0;
- (void)setAlignView:(id)arg0;
- (void)setLongPressGestureManager:(id)arg0;
- (id)longPressFavoriteData;
- (void)setLongPressFavoriteData:(id)arg0;
- (void)remove;
- (void)setModel:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)targetView;
- (void)setCompletion:(id /* block */)arg0;
- (id)model;
- (void)setTargetView:(id)arg0;
- (void)showWithCompletion:(id /* block */)arg0;

@end
