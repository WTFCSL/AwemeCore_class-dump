//
//     Generated by private class-dump
//

@class NSArray;

@protocol ACCPublishMergeImageHelperProtocol <NSObject>

@property (readonly, weak, nonatomic) NSArray *allOperation;
@property (retain, nonatomic) NSArray *disableSequenceEditServiceIndexs;

- (id)disableSequenceEditServiceIndexs;
- (void)removeWithOperationIDs:(id)arg0;
- (void)useSequenceEditService:(id)arg0;
- (void)useEditServiceManager:(id)arg0;
- (id)imageWithConfig:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)imagesWithConfig:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)removeReusableEditServicesIfNeeded;
- (id)allOperation;
- (void)setDisableSequenceEditServiceIndexs:(id)arg0;

@end
