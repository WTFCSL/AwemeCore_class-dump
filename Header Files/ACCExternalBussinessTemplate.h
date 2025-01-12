//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCExternalBussinessTemplate : NSObject <ACCBusinessTemplate> {
    AWEVideoPublishViewModel *_repository;
    id<IESServiceProvider> _context;
}

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)repository;

@end
