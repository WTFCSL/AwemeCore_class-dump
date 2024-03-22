//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCCreationRepositoryBaseProtocol, ACCUseCaseContext;

@interface AWERepositoryCreationModelWrapper : NSObject <FPCreationModel> {
    id<ACCCreationRepositoryBaseProtocol, ACCUseCaseContext> _repository;
}

@property (retain, nonatomic) id<ACCCreationRepositoryBaseProtocol, ACCUseCaseContext> repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fp_getRepoServiceWithAPI:(id)arg0;
- (id)fp_getReaderWithProtocol:(id)arg0;
- (id)fp_getWriterWithClass:(Class)arg0;
- (id)initWithRepository:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
