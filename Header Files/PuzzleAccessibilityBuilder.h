//
//     Generated by private class-dump
//

@class UIAccessibilityElement, NSMutableArray, NSObject;

@interface PuzzleAccessibilityBuilder : NSObject {
    NSObject *_constrctingView;
    NSObject *_containerView;
    UIAccessibilityElement *_containerViewPlaceholderElement;
    NSMutableArray *_elements;
}

@property (weak, nonatomic) NSObject *constrctingView;
@property (weak, nonatomic) NSObject *containerView;
@property (retain, nonatomic) UIAccessibilityElement *containerViewPlaceholderElement;
@property (retain, nonatomic) NSMutableArray *elements;
@property (readonly, copy, nonatomic) id /* block */ label;
@property (readonly, copy, nonatomic) id /* block */ calAccessFrame;
@property (readonly, copy, nonatomic) id /* block */ hint;

- (id /* block */)calAccessFrame;
- (id /* block */)appendElement;
- (id)constrctingView;
- (void)setContainerViewPlaceholderElement:(id)arg0;
- (id /* block */)appendElementArray;
- (id /* block */)insertElement;
- (id /* block */)insertElementArray;
- (void)setConstrctingView:(id)arg0;
- (id)containerViewPlaceholderElement;
- (id)initWithView:(id)arg0;
- (void)setElements:(id)arg0;
- (id /* block */)traits;
- (void).cxx_destruct;
- (id /* block */)value;
- (id)elements;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id /* block */)label;
- (id)initWithAccessibilityContainer:(id)arg0;
- (id /* block */)hint;

@end
