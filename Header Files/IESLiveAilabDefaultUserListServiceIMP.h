//
//     Generated by private class-dump
//

@class NSString;
@protocol AFDMentionAilabDefaultUserListDataControllerProtocol;

@interface IESLiveAilabDefaultUserListServiceIMP : NSObject <IESLiveAilabDefaultUserListService> {
    id<AFDMentionAilabDefaultUserListDataControllerProtocol> _dataContraller;
}

@property (retain, nonatomic) id<AFDMentionAilabDefaultUserListDataControllerProtocol> dataContraller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAilabDefaultUserListCompletion:(id /* block */)arg0;
- (id)dataContraller;
- (void)setDataContraller:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
