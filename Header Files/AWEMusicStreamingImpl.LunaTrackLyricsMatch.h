//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaTrackLyricsMatch : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ snippet;
    void /* unknown type, empty encoding */ startIndex;
    void /* unknown type, empty encoding */ endIndex;
}

@property (nonatomic, copy) NSString *snippet;
@property (nonatomic) void /* unknown type, empty encoding */ startIndex;
@property (nonatomic) void /* unknown type, empty encoding */ endIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)startIndex;
- (id)init;
- (void)setStartIndex:(long long)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (long long)endIndex;
- (void)setEndIndex:(long long)arg0;
- (id)snippet;
- (void)setSnippet:(id)arg0;

@end
