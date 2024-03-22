//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESServiceProvider;

@interface AWECloudAlbumDetailComponentManager : NSObject <AWECloudAlbumDetailComponentManager> {
    id<IESServiceProvider> _context;
    NSArray *_classes;
    NSArray *_components;
}

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, copy, nonatomic) NSArray *classes;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (id)initWithContext:(id)arg0 classes:(id)arg1;
- (id)components;
- (void).cxx_destruct;
- (id)context;
- (id)classes;

@end