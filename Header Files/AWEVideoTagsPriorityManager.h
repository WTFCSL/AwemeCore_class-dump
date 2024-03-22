//
//     Generated by private class-dump
//

@class NSMutableArray, UIView;
@protocol AFDVideoTagsProtocol;

@interface AWEVideoTagsPriorityManager : NSObject {
    NSMutableArray *_components;
    id<AFDVideoTagsProtocol> _activedComponent;
    UIView *_placeHolderView;
}

@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) id<AFDVideoTagsProtocol> activedComponent;
@property (retain, nonatomic) UIView *placeHolderView;

+ (id)componentsPriorities;

- (id)initWithSourceElement:(id)arg0;
- (BOOL)needShowWithData:(id)arg0;
- (id)activedComponent;
- (void)setActivedComponent:(id)arg0;
- (BOOL)canShowPlaceHolderWithModel:(id)arg0;
- (id)components;
- (void).cxx_destruct;
- (void)setComponents:(id)arg0;
- (void)updateWithData:(id)arg0;
- (id)placeHolderView;
- (void)setPlaceHolderView:(id)arg0;

@end