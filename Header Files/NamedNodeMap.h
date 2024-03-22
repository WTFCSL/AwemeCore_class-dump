//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface NamedNodeMap : NSObject <NSCopying> {
    NSMutableDictionary *internalDictionary;
    NSMutableDictionary *internalDictionaryOfNamespaces;
}

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;
@property (retain, nonatomic) NSMutableDictionary *internalDictionaryOfNamespaces;
@property (readonly) unsigned long long length;

- (void)setInternalDictionary:(id)arg0;
- (void)setInternalDictionaryOfNamespaces:(id)arg0;
- (id)internalDictionary;
- (id)internalDictionaryOfNamespaces;
- (id)setNamedItemNS:(id)arg0 inNodeNamespace:(id)arg1;
- (id)allNodesUnsortedDOM1;
- (id)allNodesUnsortedDOM2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)length;
- (id)description;
- (id)item:(unsigned long long)arg0;
- (id)getNamedItem:(id)arg0;
- (id)setNamedItem:(id)arg0;
- (id)removeNamedItem:(id)arg0;
- (id)getNamedItemNS:(id)arg0 localName:(id)arg1;
- (id)setNamedItemNS:(id)arg0;
- (id)removeNamedItemNS:(id)arg0 localName:(id)arg1;

@end