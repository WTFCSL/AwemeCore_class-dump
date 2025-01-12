//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESPrefetchProjectTemplate : NSObject <IESPrefetchConfigTemplate> {
    NSArray *children;
    NSString *_project;
    NSString *_version;
}

@property (copy, nonatomic) NSString *project;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)project;
- (void)setProject:(id)arg0;
- (id)process:(id)arg0;
- (void)setChildren:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (id)jsonRepresentation;
- (id)children;

@end
