//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;
@protocol AWEPublishEditServiceManagerProtocol;

@protocol AWEPostPageContext <ACCPublishRepository>

@property (readonly, nonatomic) AWEVideoPublishViewModel *model;
@property (readonly, nonatomic) AWEVideoPublishViewModel *originalModel;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;

- (id)originalModel;
- (id)editServiceManager;
- (void)setEditServiceManager:(id)arg0;
- (id)model;

@end