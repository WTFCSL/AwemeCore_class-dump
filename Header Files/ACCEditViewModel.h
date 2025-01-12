//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel, ACCEditViewControllerInputData;
@protocol IESServiceProvider;

@interface ACCEditViewModel : NSObject {
    ACCEditViewControllerInputData *_inputData;
    AWEVideoPublishViewModel *_repoContainer;
    id<IESServiceProvider> _serviceProvider;
}

@property (readonly, nonatomic) ACCEditViewControllerInputData *inputData;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (id)repoContainer;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)arg0;
- (id)serviceProvider;
- (id)inputData;

@end
