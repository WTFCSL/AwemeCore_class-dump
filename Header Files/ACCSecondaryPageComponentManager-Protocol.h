//
//     Generated by private class-dump
//

@class NSArray;

@protocol ACCSecondaryPageComponentManager <NSObject>

@property (readonly, copy, nonatomic) NSArray *loadedComponents;

- (void)loadComponents;
- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (id)loadedComponents;
- (id)initWithContext:(id)arg0;

@end
