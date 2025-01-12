//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSecondaryPageInputData : NSObject <ACCSecondaryPageInputData> {
    id<IESServiceProvider> _context;
    AWEVideoPublishViewModel *_publishModel;
    NSArray *_componentClasses;
}

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *componentClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)componentClasses;
- (void)setComponentClasses:(id)arg0;
- (id)initWithContext:(id)arg0 publishViewModel:(id)arg1 componentTemplate:(id)arg2;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;

@end
