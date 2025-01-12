//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDPAppFileURLParser : NSObject <BDPURLParserProtocol> {
    NSMutableDictionary *_pathUniqueIDMap;
    long long _folderIndex;
    NSString *_virtualUrl;
}

@property (retain, nonatomic) NSMutableDictionary *pathUniqueIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)parseRequestURL:(id)arg0;
- (id)generateVirtualFolderPath;
- (id)addJSSDKFolderMaskForPath:(id)arg0;
- (void)registerVirtualPath:(id)arg0 forUniqueId:(id)arg1;
- (void)unregisterVirtualPath:(id)arg0;
- (id)pathUniqueIDMap;
- (void)setPathUniqueIDMap:(id)arg0;
- (id)initWithVirtualBaseURL:(id)arg0;
- (void).cxx_destruct;

@end
