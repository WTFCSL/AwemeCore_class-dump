//
//     Generated by private class-dump
//

@class NSString;
@protocol XPlayResolution;

@interface IESGCPXPlayGameResolution : NSObject <IESGCPXPlayGameResolution> {
    id<XPlayResolution> _resolution;
}

@property (retain, nonatomic) id<XPlayResolution> resolution;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long resolutionType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToDict;
- (id)initWithXPlayResolution:(id)arg0;
- (void)setResolution:(id)arg0;
- (id)resolution;
- (void).cxx_destruct;
- (long long)index;
- (id)name;
- (long long)resolutionType;

@end
